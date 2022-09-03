// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Insectivore_Tiny_Sinomacrops_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_Insectivore_Tiny_Sinomacrops.DinoSettings_Insectivore_Tiny_Sinomacrops_C.ExecuteUbergraph_DinoSettings_Insectivore_Tiny_Sinomacrops
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Insectivore_Tiny_Sinomacrops_C::ExecuteUbergraph_DinoSettings_Insectivore_Tiny_Sinomacrops(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Insectivore_Tiny_Sinomacrops.DinoSettings_Insectivore_Tiny_Sinomacrops_C.ExecuteUbergraph_DinoSettings_Insectivore_Tiny_Sinomacrops");

	UDinoSettings_Insectivore_Tiny_Sinomacrops_C_ExecuteUbergraph_DinoSettings_Insectivore_Tiny_Sinomacrops_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
