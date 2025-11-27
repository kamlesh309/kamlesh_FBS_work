package devices;

import model.Device;
import behaviours.ControlTemp;
import behaviours.ChangeMode;

public class AC extends Device implements ControlTemp, ChangeMode {
    private int temperature;
    private String mode;

    public AC(String name) {
        super(name);
        temperature = 24;
        mode = "Cool";
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
	public void modeChange(String mode) {
		this.mode = mode;
	}

    @Override
	public String getDeviceType() {
		return "AC";
	}

	public int getTemperature() {
		return temperature;
	}

	public String getMode() {
		return mode;
	}
}

