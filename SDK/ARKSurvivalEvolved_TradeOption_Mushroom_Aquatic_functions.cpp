// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_Mushroom_Aquatic_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TradeOption_Mushroom_Aquatic.TradeOption_Mushroom_Aquatic_C.ExecuteUbergraph_TradeOption_Mushroom_Aquatic
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTradeOption_Mushroom_Aquatic_C::ExecuteUbergraph_TradeOption_Mushroom_Aquatic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeOption_Mushroom_Aquatic.TradeOption_Mushroom_Aquatic_C.ExecuteUbergraph_TradeOption_Mushroom_Aquatic");

	UTradeOption_Mushroom_Aquatic_C_ExecuteUbergraph_TradeOption_Mushroom_Aquatic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
