// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_LanternPetBird_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_LanternPetBird.DinoEntry_LanternPetBird_C.ExecuteUbergraph_DinoEntry_LanternPetBird
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_LanternPetBird_C::ExecuteUbergraph_DinoEntry_LanternPetBird(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_LanternPetBird.DinoEntry_LanternPetBird_C.ExecuteUbergraph_DinoEntry_LanternPetBird");

	UDinoEntry_LanternPetBird_C_ExecuteUbergraph_DinoEntry_LanternPetBird_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
