// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_FlaregunFireworks_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_FlaregunFireworks.PrimalItemSkin_FlaregunFireworks_C.ExecuteUbergraph_PrimalItemSkin_FlaregunFireworks
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_FlaregunFireworks_C::ExecuteUbergraph_PrimalItemSkin_FlaregunFireworks(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_FlaregunFireworks.PrimalItemSkin_FlaregunFireworks_C.ExecuteUbergraph_PrimalItemSkin_FlaregunFireworks");

	UPrimalItemSkin_FlaregunFireworks_C_ExecuteUbergraph_PrimalItemSkin_FlaregunFireworks_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
