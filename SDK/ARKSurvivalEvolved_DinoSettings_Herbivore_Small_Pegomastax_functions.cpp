// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Herbivore_Small_Pegomastax_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_Herbivore_Small_Pegomastax.DinoSettings_Herbivore_Small_Pegomastax_C.ExecuteUbergraph_DinoSettings_Herbivore_Small_Pegomastax
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Herbivore_Small_Pegomastax_C::ExecuteUbergraph_DinoSettings_Herbivore_Small_Pegomastax(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Herbivore_Small_Pegomastax.DinoSettings_Herbivore_Small_Pegomastax_C.ExecuteUbergraph_DinoSettings_Herbivore_Small_Pegomastax");

	UDinoSettings_Herbivore_Small_Pegomastax_C_ExecuteUbergraph_DinoSettings_Herbivore_Small_Pegomastax_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
