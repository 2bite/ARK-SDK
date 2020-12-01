// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Scorpion_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_Scorpion.DinoTamedInventoryComponent_Scorpion_C.ExecuteUbergraph_DinoTamedInventoryComponent_Scorpion
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_Scorpion_C::ExecuteUbergraph_DinoTamedInventoryComponent_Scorpion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_Scorpion.DinoTamedInventoryComponent_Scorpion_C.ExecuteUbergraph_DinoTamedInventoryComponent_Scorpion");

	UDinoTamedInventoryComponent_Scorpion_C_ExecuteUbergraph_DinoTamedInventoryComponent_Scorpion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
