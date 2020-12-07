// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_Skin_Account_GameTester_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_Skin_Account_GameTester.PrimalItem_Skin_Account_GameTester_C.ExecuteUbergraph_PrimalItem_Skin_Account_GameTester
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_Skin_Account_GameTester_C::ExecuteUbergraph_PrimalItem_Skin_Account_GameTester(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_Skin_Account_GameTester.PrimalItem_Skin_Account_GameTester_C.ExecuteUbergraph_PrimalItem_Skin_Account_GameTester");

	UPrimalItem_Skin_Account_GameTester_C_ExecuteUbergraph_PrimalItem_Skin_Account_GameTester_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
