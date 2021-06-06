// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_LanternPetLizard_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_LanternPetLizard.DinoEntry_LanternPetLizard_C.ExecuteUbergraph_DinoEntry_LanternPetLizard
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_LanternPetLizard_C::ExecuteUbergraph_DinoEntry_LanternPetLizard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_LanternPetLizard.DinoEntry_LanternPetLizard_C.ExecuteUbergraph_DinoEntry_LanternPetLizard");

	UDinoEntry_LanternPetLizard_C_ExecuteUbergraph_DinoEntry_LanternPetLizard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
