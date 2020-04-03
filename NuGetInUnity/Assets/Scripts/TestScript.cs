using System;
using System.Runtime.InteropServices;
using UnityEngine.UI;
using UnityEngine;

public class TestScript : MonoBehaviour
{
    [DllImport("SimpleLib", EntryPoint = "AddNums")]
    public static extern float AddNumbers(float a, float b);

    [DllImport("SimpleLib", EntryPoint = "SubtractNums")]
    public static extern float SubtractNumbers(float a, float b);

    [DllImport("SimpleLib", EntryPoint = "MultiplyNums")]
    public static extern float MultiplyNumbers(float a, float b);

    [SerializeField]
    private Text result;

    void Start()
    {
        try 
        {
            float r = MultiplyNumbers(45, 67.7f);
            result.text = "45 * 67.7 = " + r;
        }
        catch (Exception ex)
        {
            result.text = "DllNotFoundException: SimpleLib";
        }
    }
}
