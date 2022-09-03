// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Carnivore_Huge_TekWyvern_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_Carnivore_Huge_TekWyvern.DinoSettings_Carnivore_Huge_TekWyvern_C.ExecuteUbergraph_DinoSettings_Carnivore_Huge_TekWyvern
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Carnivore_Huge_TekWyvern_C::ExecuteUbergraph_DinoSettings_Carnivore_Huge_TekWyvern(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Carnivore_Huge_TekWyvern.DinoSettings_Carnivore_Huge_TekWyvern_C.ExecuteUbergraph_DinoSettings_Carnivore_Huge_TekWyvern");

	UDinoSettings_Carnivore_Huge_TekWyvern_C_ExecuteUbergraph_DinoSettings_Carnivore_Huge_TekWyvern_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
