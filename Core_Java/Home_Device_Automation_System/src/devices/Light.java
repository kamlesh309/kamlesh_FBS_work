package devices;

import model.Device;
import behaviours.ChangeColor;

public class Light extends Device implements ChangeColor {
    private String color;

    public Light(String name) {
        super(name);
        this.color = "White";
    }

    @Override
	public void colorChange(String color) {
		this.color = color;
	}

    @Override
	public String getDeviceType() {
		return "Light";
	}

	public String getColor() {
		return color;
	}
}

