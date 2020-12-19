// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_LanternPetPug_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_LanternPetPug.DinoEntry_LanternPetPug_C.ExecuteUbergraph_DinoEntry_LanternPetPug
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_LanternPetPug_C::ExecuteUbergraph_DinoEntry_LanternPetPug(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_LanternPetPug.DinoEntry_LanternPetPug_C.ExecuteUbergraph_DinoEntry_LanternPetPug");

	UDinoEntry_LanternPetPug_C_ExecuteUbergraph_DinoEntry_LanternPetPug_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
