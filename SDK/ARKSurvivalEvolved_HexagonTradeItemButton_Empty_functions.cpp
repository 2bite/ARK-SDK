// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_HexagonTradeItemButton_Empty_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HexagonTradeItemButton_Empty.HexagonTradeItemButton_Empty_C.ExecuteUbergraph_HexagonTradeItemButton_Empty
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UHexagonTradeItemButton_Empty_C::ExecuteUbergraph_HexagonTradeItemButton_Empty(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HexagonTradeItemButton_Empty.HexagonTradeItemButton_Empty_C.ExecuteUbergraph_HexagonTradeItemButton_Empty");

	UHexagonTradeItemButton_Empty_C_ExecuteUbergraph_HexagonTradeItemButton_Empty_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
