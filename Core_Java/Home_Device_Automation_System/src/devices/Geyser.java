package devices;

import model.Device;
import behaviours.ControlTemp;

public class Geyser extends Device implements ControlTemp {
    private int temperature;

    public Geyser(String name) {
        super(name);
        temperature = 40;
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
		return "Geyser";
	}

	public int getTemperature() {
		return temperature;
	}
}

