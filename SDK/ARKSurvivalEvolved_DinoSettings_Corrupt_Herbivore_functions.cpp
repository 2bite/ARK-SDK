// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Corrupt_Herbivore_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_Corrupt_Herbivore.DinoSettings_Corrupt_Herbivore_C.ExecuteUbergraph_DinoSettings_Corrupt_Herbivore
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Corrupt_Herbivore_C::ExecuteUbergraph_DinoSettings_Corrupt_Herbivore(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Corrupt_Herbivore.DinoSettings_Corrupt_Herbivore_C.ExecuteUbergraph_DinoSettings_Corrupt_Herbivore");

	UDinoSettings_Corrupt_Herbivore_C_ExecuteUbergraph_DinoSettings_Corrupt_Herbivore_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
