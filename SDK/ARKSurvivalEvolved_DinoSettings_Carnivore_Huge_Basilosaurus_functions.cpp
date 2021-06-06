// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Carnivore_Huge_Basilosaurus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_Carnivore_Huge_Basilosaurus.DinoSettings_Carnivore_Huge_Basilosaurus_C.ExecuteUbergraph_DinoSettings_Carnivore_Huge_Basilosaurus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Carnivore_Huge_Basilosaurus_C::ExecuteUbergraph_DinoSettings_Carnivore_Huge_Basilosaurus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Carnivore_Huge_Basilosaurus.DinoSettings_Carnivore_Huge_Basilosaurus_C.ExecuteUbergraph_DinoSettings_Carnivore_Huge_Basilosaurus");

	UDinoSettings_Carnivore_Huge_Basilosaurus_C_ExecuteUbergraph_DinoSettings_Carnivore_Huge_Basilosaurus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
