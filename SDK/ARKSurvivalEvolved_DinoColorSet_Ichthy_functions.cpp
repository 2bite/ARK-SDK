// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Ichthy_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Ichthy.DinoColorSet_Ichthy_C.ExecuteUbergraph_DinoColorSet_Ichthy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Ichthy_C::ExecuteUbergraph_DinoColorSet_Ichthy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Ichthy.DinoColorSet_Ichthy_C.ExecuteUbergraph_DinoColorSet_Ichthy");

	UDinoColorSet_Ichthy_C_ExecuteUbergraph_DinoColorSet_Ichthy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
