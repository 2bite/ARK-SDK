// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GasBags_Interface_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GasBags_Interface.GasBags_Interface_C.ModifyInflationValue
// ()
// Parameters:
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DeltaIsPercent                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Subtract                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewInflationPercent            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGasBags_Interface_C::ModifyInflationValue(float Delta, bool DeltaIsPercent, bool Subtract, float* NewInflationPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Interface.GasBags_Interface_C.ModifyInflationValue");

	UGasBags_Interface_C_ModifyInflationValue_Params params;
	params.Delta = Delta;
	params.DeltaIsPercent = DeltaIsPercent;
	params.Subtract = Subtract;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewInflationPercent != nullptr)
		*NewInflationPercent = params.NewInflationPercent;
}


// Function GasBags_Interface.GasBags_Interface_C.GetInflationValue
// ()
// Parameters:
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Percent                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGasBags_Interface_C::GetInflationValue(float* Value, float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasBags_Interface.GasBags_Interface_C.GetInflationValue");

	UGasBags_Interface_C_GetInflationValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
	if (Percent != nullptr)
		*Percent = params.Percent;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
