// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Diplocaulus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Diplocaulus.DinoColorSet_Diplocaulus_C.ExecuteUbergraph_DinoColorSet_Diplocaulus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Diplocaulus_C::ExecuteUbergraph_DinoColorSet_Diplocaulus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Diplocaulus.DinoColorSet_Diplocaulus_C.ExecuteUbergraph_DinoColorSet_Diplocaulus");

	UDinoColorSet_Diplocaulus_C_ExecuteUbergraph_DinoColorSet_Diplocaulus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
