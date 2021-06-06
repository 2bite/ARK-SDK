// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_RareMushroom_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TradeOption_RareMushroom.TradeOption_RareMushroom_C.ExecuteUbergraph_TradeOption_RareMushroom
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTradeOption_RareMushroom_C::ExecuteUbergraph_TradeOption_RareMushroom(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeOption_RareMushroom.TradeOption_RareMushroom_C.ExecuteUbergraph_TradeOption_RareMushroom");

	UTradeOption_RareMushroom_C_ExecuteUbergraph_TradeOption_RareMushroom_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
