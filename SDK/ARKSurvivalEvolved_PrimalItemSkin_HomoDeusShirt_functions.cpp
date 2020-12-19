// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_HomoDeusShirt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_HomoDeusShirt.PrimalItemSkin_HomoDeusShirt_C.ExecuteUbergraph_PrimalItemSkin_HomoDeusShirt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_HomoDeusShirt_C::ExecuteUbergraph_PrimalItemSkin_HomoDeusShirt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_HomoDeusShirt.PrimalItemSkin_HomoDeusShirt_C.ExecuteUbergraph_PrimalItemSkin_HomoDeusShirt");

	UPrimalItemSkin_HomoDeusShirt_C_ExecuteUbergraph_PrimalItemSkin_HomoDeusShirt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
