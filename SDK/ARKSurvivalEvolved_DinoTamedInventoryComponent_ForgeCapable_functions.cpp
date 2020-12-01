// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_ForgeCapable_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_ForgeCapable.DinoTamedInventoryComponent_ForgeCapable_C.ExecuteUbergraph_DinoTamedInventoryComponent_ForgeCapable
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_ForgeCapable_C::ExecuteUbergraph_DinoTamedInventoryComponent_ForgeCapable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_ForgeCapable.DinoTamedInventoryComponent_ForgeCapable_C.ExecuteUbergraph_DinoTamedInventoryComponent_ForgeCapable");

	UDinoTamedInventoryComponent_ForgeCapable_C_ExecuteUbergraph_DinoTamedInventoryComponent_ForgeCapable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
