//import com.sun.org.apache.xml.internal.security.utils.HelperNodeList;
package Step1;

public class Santa implements Runnable {

	enum SantaState {SLEEPING, READY_FOR_CHRISTMAS, WOKEN_UP_BY_ELVES, WOKEN_UP_BY_REINDEER, DONE};
	private SantaState state;
	private boolean terminate;
	
	public Santa(SantaScenario scenario) {
		this.state = SantaState.SLEEPING;
		this.terminate = false;
	}

	public void setTerminate(boolean terminate) {
		this.terminate = terminate;
	}
	
	@Override
	public void run() {
		while(true) {
			if(terminate){
				state = SantaState.DONE;
				return;
			}
			// wait a day...
			try {
				Thread.sleep(100);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			switch(state) {
			case SLEEPING: // if sleeping, continue to sleep
				break;
			case WOKEN_UP_BY_ELVES: 
				// FIXME: help the elves who are at the door and go back to sleep 
				break;
			case WOKEN_UP_BY_REINDEER: 
				// FIXME: assemble the reindeer to the sleigh then change state to ready 
				break;
			case READY_FOR_CHRISTMAS: // nothing more to be done
				break;
			}
		}
	}

	
	/**
	 * Report about my state
	 */
	public void report() {
		System.out.println("Santa : " + state);
	}
	
	
}
