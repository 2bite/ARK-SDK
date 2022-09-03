// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Sinomacrops_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Sinomacrops.DinoColorSet_Sinomacrops_C.ExecuteUbergraph_DinoColorSet_Sinomacrops
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Sinomacrops_C::ExecuteUbergraph_DinoColorSet_Sinomacrops(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Sinomacrops.DinoColorSet_Sinomacrops_C.ExecuteUbergraph_DinoColorSet_Sinomacrops");

	UDinoColorSet_Sinomacrops_C_ExecuteUbergraph_DinoColorSet_Sinomacrops_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
