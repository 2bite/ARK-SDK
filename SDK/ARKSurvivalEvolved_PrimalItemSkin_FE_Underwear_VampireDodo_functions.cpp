// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_FE_Underwear_VampireDodo_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_FE_Underwear_VampireDodo.PrimalItemSkin_FE_Underwear_VampireDodo_C.ExecuteUbergraph_PrimalItemSkin_FE_Underwear_VampireDodo
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_FE_Underwear_VampireDodo_C::ExecuteUbergraph_PrimalItemSkin_FE_Underwear_VampireDodo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_FE_Underwear_VampireDodo.PrimalItemSkin_FE_Underwear_VampireDodo_C.ExecuteUbergraph_PrimalItemSkin_FE_Underwear_VampireDodo");

	UPrimalItemSkin_FE_Underwear_VampireDodo_C_ExecuteUbergraph_PrimalItemSkin_FE_Underwear_VampireDodo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
