// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_HexagonTradeItemButton_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HexagonTradeItemButton.HexagonTradeItemButton_C.ExecuteUbergraph_HexagonTradeItemButton
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UHexagonTradeItemButton_C::ExecuteUbergraph_HexagonTradeItemButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HexagonTradeItemButton.HexagonTradeItemButton_C.ExecuteUbergraph_HexagonTradeItemButton");

	UHexagonTradeItemButton_C_ExecuteUbergraph_HexagonTradeItemButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
