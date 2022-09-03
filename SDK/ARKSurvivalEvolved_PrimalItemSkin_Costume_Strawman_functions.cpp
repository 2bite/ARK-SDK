// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_Costume_Strawman_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_Costume_Strawman.PrimalItemSkin_Costume_Strawman_C.ExecuteUbergraph_PrimalItemSkin_Costume_Strawman
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_Costume_Strawman_C::ExecuteUbergraph_PrimalItemSkin_Costume_Strawman(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_Costume_Strawman.PrimalItemSkin_Costume_Strawman_C.ExecuteUbergraph_PrimalItemSkin_Costume_Strawman");

	UPrimalItemSkin_Costume_Strawman_C_ExecuteUbergraph_PrimalItemSkin_Costume_Strawman_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
