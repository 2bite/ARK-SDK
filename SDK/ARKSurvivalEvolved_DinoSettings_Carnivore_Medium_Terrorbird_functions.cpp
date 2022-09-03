// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Carnivore_Medium_Terrorbird_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_Carnivore_Medium_Terrorbird.DinoSettings_Carnivore_Medium_Terrorbird_C.ExecuteUbergraph_DinoSettings_Carnivore_Medium_Terrorbird
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Carnivore_Medium_Terrorbird_C::ExecuteUbergraph_DinoSettings_Carnivore_Medium_Terrorbird(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Carnivore_Medium_Terrorbird.DinoSettings_Carnivore_Medium_Terrorbird_C.ExecuteUbergraph_DinoSettings_Carnivore_Medium_Terrorbird");

	UDinoSettings_Carnivore_Medium_Terrorbird_C_ExecuteUbergraph_DinoSettings_Carnivore_Medium_Terrorbird_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
