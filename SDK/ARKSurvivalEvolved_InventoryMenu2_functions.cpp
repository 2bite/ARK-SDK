// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_InventoryMenu2_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function InventoryMenu2.InventoryMenu2_C.ExecuteUbergraph_InventoryMenu2
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryMenu2_C::ExecuteUbergraph_InventoryMenu2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryMenu2.InventoryMenu2_C.ExecuteUbergraph_InventoryMenu2");

	UInventoryMenu2_C_ExecuteUbergraph_InventoryMenu2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
