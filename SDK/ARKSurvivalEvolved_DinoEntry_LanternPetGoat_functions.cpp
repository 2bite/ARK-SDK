// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_LanternPetGoat_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_LanternPetGoat.DinoEntry_LanternPetGoat_C.ExecuteUbergraph_DinoEntry_LanternPetGoat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_LanternPetGoat_C::ExecuteUbergraph_DinoEntry_LanternPetGoat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_LanternPetGoat.DinoEntry_LanternPetGoat_C.ExecuteUbergraph_DinoEntry_LanternPetGoat");

	UDinoEntry_LanternPetGoat_C_ExecuteUbergraph_DinoEntry_LanternPetGoat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
