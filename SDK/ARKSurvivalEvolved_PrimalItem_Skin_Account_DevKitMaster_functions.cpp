// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_Skin_Account_DevKitMaster_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_Skin_Account_DevKitMaster.PrimalItem_Skin_Account_DevKitMaster_C.ExecuteUbergraph_PrimalItem_Skin_Account_DevKitMaster
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_Skin_Account_DevKitMaster_C::ExecuteUbergraph_PrimalItem_Skin_Account_DevKitMaster(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_Skin_Account_DevKitMaster.PrimalItem_Skin_Account_DevKitMaster_C.ExecuteUbergraph_PrimalItem_Skin_Account_DevKitMaster");

	UPrimalItem_Skin_Account_DevKitMaster_C_ExecuteUbergraph_PrimalItem_Skin_Account_DevKitMaster_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
