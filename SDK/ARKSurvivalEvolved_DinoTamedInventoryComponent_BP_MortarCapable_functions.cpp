// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_BP_MortarCapable_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoTamedInventoryComponent_BP_MortarCapable.DinoTamedInventoryComponent_BP_MortarCapable_C.ExecuteUbergraph_DinoTamedInventoryComponent_BP_MortarCapable
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoTamedInventoryComponent_BP_MortarCapable_C::ExecuteUbergraph_DinoTamedInventoryComponent_BP_MortarCapable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_BP_MortarCapable.DinoTamedInventoryComponent_BP_MortarCapable_C.ExecuteUbergraph_DinoTamedInventoryComponent_BP_MortarCapable");

	UDinoTamedInventoryComponent_BP_MortarCapable_C_ExecuteUbergraph_DinoTamedInventoryComponent_BP_MortarCapable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
