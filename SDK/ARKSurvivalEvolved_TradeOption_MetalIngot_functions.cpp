// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_MetalIngot_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TradeOption_MetalIngot.TradeOption_MetalIngot_C.ExecuteUbergraph_TradeOption_MetalIngot
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTradeOption_MetalIngot_C::ExecuteUbergraph_TradeOption_MetalIngot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeOption_MetalIngot.TradeOption_MetalIngot_C.ExecuteUbergraph_TradeOption_MetalIngot");

	UTradeOption_MetalIngot_C_ExecuteUbergraph_TradeOption_MetalIngot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
