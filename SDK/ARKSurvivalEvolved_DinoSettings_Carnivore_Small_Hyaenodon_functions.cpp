// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Carnivore_Small_Hyaenodon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_Carnivore_Small_Hyaenodon.DinoSettings_Carnivore_Small_Hyaenodon_C.ExecuteUbergraph_DinoSettings_Carnivore_Small_Hyaenodon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Carnivore_Small_Hyaenodon_C::ExecuteUbergraph_DinoSettings_Carnivore_Small_Hyaenodon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Carnivore_Small_Hyaenodon.DinoSettings_Carnivore_Small_Hyaenodon_C.ExecuteUbergraph_DinoSettings_Carnivore_Small_Hyaenodon");

	UDinoSettings_Carnivore_Small_Hyaenodon_C_ExecuteUbergraph_DinoSettings_Carnivore_Small_Hyaenodon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
