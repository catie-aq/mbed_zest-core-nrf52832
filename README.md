# Zest_Core_nRF52832
[Zest_Core_nRF52832](https://gitlab.com/catie_6tron/zest-core-nrf52832-hardware)
custom target for Mbed OS.

## Usage
In your project root directory:

1.  Add the custom target to your project:

    ```shell
    mbed add https://gitlab.com/catie_6tron/zest-core-nrf52832.git
    ```

2. Enable the custom target by adding or overwriting the `custom_targets.json` at the
   root of the project:

    ```shell
    cp zest-core-nrf52832/custom_targets.json .
    ```

3. Compile for the custom target:

   ```shell
   mbed compile --target ZEST_CORE_NRF52832
   ```
