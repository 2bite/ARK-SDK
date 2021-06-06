// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_Skin_Account_WildcardAdmin_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_Skin_Account_WildcardAdmin.PrimalItem_Skin_Account_WildcardAdmin_C.ExecuteUbergraph_PrimalItem_Skin_Account_WildcardAdmin
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_Skin_Account_WildcardAdmin_C::ExecuteUbergraph_PrimalItem_Skin_Account_WildcardAdmin(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_Skin_Account_WildcardAdmin.PrimalItem_Skin_Account_WildcardAdmin_C.ExecuteUbergraph_PrimalItem_Skin_Account_WildcardAdmin");

	UPrimalItem_Skin_Account_WildcardAdmin_C_ExecuteUbergraph_PrimalItem_Skin_Account_WildcardAdmin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
