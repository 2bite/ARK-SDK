// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Omnivore_Medium_Moschops_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_Omnivore_Medium_Moschops.DinoSettings_Omnivore_Medium_Moschops_C.ExecuteUbergraph_DinoSettings_Omnivore_Medium_Moschops
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Omnivore_Medium_Moschops_C::ExecuteUbergraph_DinoSettings_Omnivore_Medium_Moschops(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Omnivore_Medium_Moschops.DinoSettings_Omnivore_Medium_Moschops_C.ExecuteUbergraph_DinoSettings_Omnivore_Medium_Moschops");

	UDinoSettings_Omnivore_Medium_Moschops_C_ExecuteUbergraph_DinoSettings_Omnivore_Medium_Moschops_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
