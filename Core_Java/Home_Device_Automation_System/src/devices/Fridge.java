package devices;

import model.Device;
import behaviours.ControlTemp;

public class Fridge extends Device implements ControlTemp {
    private int temperature;

    public Fridge(String name) {
        super(name);
        this.temperature = 5;
    }

    @Override
	public void increaseTemp() {
		temperature++;
	}

    @Override
	public void decreaseTemp() {
		temperature--;
	}

    @Override
	public String getDeviceType() {
		return "Fridge";
	}

	public int getTemperature() {
		return temperature;
	}
}
