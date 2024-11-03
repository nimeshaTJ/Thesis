import numpy as np

num_boxes = 10
planes = 4
box_size = 0.03
rgba = "0.9 0 0 1"
bounds = {"x": 0.1, "y":0.1, "z":0.3}
origin = {"x": 0.5, "y":0, "z":0}
height = 0.1

def create_positions(num_boxes, bounds, height, box_size):
    positions = []
    count = 0
    while (len(positions) < num_boxes):
        valid = True
        x = round(origin["x"] + np.random.uniform(-bounds["x"]/2, bounds["x"]/2), 2)
        y = round(origin["y"] + np.random.uniform(-bounds["y"]/2, bounds["y"]/2), 2)
        z = round(origin["z"] + np.random.uniform(height, bounds["z"]), 2)
        for pos in positions:
            dx = x - pos[0]
            dy = y - pos[1]
            dz = z - pos[2]
            distance = np.sqrt(dx**2 + dy**2 + dz**2)
            min_dist = np.sqrt(3*(box_size**2))
            if (distance < min_dist):
                valid = False
        if valid:
            positions.append([x, y, z])

    pos_strings = [f"{pos[0]} {pos[1]} {pos[2]}" for pos in positions]

    return pos_strings

def add_header(xml):
    header = """\
<mujoco>
    <worldbody>
"""
    xml.write(header)

def add_footer(xml):
    footer = """\
    </worldbody>
</mujoco>\
"""
    xml.write(footer)

def add_box(xml, pos, box_size, rgba):
    size = f"{box_size} {box_size} {box_size}"
    entry = f"""\
        <body pos="{pos}">
            <joint type="free"/>
            <geom type="box" condim = "6" friction = "3 1 .005" size="{size}" rgba="{rgba}"/>
        </body>
"""
    xml.write(entry)

positions = create_positions(num_boxes, bounds, height, box_size)

xml = open("boxes.xml", "w")

add_header(xml)
for pos in positions:
    add_box(xml, pos, box_size, rgba)
add_footer(xml)

xml.close()