// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDropInventoryComponent_Carnivore_Small_Leech_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoDropInventoryComponent_Carnivore_Small_Leech.DinoDropInventoryComponent_Carnivore_Small_Leech_C.ExecuteUbergraph_DinoDropInventoryComponent_Carnivore_Small_Leech
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoDropInventoryComponent_Carnivore_Small_Leech_C::ExecuteUbergraph_DinoDropInventoryComponent_Carnivore_Small_Leech(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoDropInventoryComponent_Carnivore_Small_Leech.DinoDropInventoryComponent_Carnivore_Small_Leech_C.ExecuteUbergraph_DinoDropInventoryComponent_Carnivore_Small_Leech");

	UDinoDropInventoryComponent_Carnivore_Small_Leech_C_ExecuteUbergraph_DinoDropInventoryComponent_Carnivore_Small_Leech_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
