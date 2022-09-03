// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_Club_BBQSpatula_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_Club_BBQSpatula.PrimalItemSkin_Club_BBQSpatula_C.ExecuteUbergraph_PrimalItemSkin_Club_BBQSpatula
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_Club_BBQSpatula_C::ExecuteUbergraph_PrimalItemSkin_Club_BBQSpatula(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_Club_BBQSpatula.PrimalItemSkin_Club_BBQSpatula_C.ExecuteUbergraph_PrimalItemSkin_Club_BBQSpatula");

	UPrimalItemSkin_Club_BBQSpatula_C_ExecuteUbergraph_PrimalItemSkin_Club_BBQSpatula_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
