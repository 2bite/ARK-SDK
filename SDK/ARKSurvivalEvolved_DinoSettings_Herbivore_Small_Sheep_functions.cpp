// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Herbivore_Small_Sheep_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_Herbivore_Small_Sheep.DinoSettings_Herbivore_Small_Sheep_C.ExecuteUbergraph_DinoSettings_Herbivore_Small_Sheep
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Herbivore_Small_Sheep_C::ExecuteUbergraph_DinoSettings_Herbivore_Small_Sheep(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Herbivore_Small_Sheep.DinoSettings_Herbivore_Small_Sheep_C.ExecuteUbergraph_DinoSettings_Herbivore_Small_Sheep");

	UDinoSettings_Herbivore_Small_Sheep_C_ExecuteUbergraph_DinoSettings_Herbivore_Small_Sheep_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
