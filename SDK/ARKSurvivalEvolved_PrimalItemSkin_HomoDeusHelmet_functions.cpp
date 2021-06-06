// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_HomoDeusHelmet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_HomoDeusHelmet.PrimalItemSkin_HomoDeusHelmet_C.ExecuteUbergraph_PrimalItemSkin_HomoDeusHelmet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_HomoDeusHelmet_C::ExecuteUbergraph_PrimalItemSkin_HomoDeusHelmet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_HomoDeusHelmet.PrimalItemSkin_HomoDeusHelmet_C.ExecuteUbergraph_PrimalItemSkin_HomoDeusHelmet");

	UPrimalItemSkin_HomoDeusHelmet_C_ExecuteUbergraph_PrimalItemSkin_HomoDeusHelmet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
