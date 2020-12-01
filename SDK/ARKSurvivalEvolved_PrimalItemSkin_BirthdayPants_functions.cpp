// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_BirthdayPants_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_BirthdayPants.PrimalItemSkin_BirthdayPants_C.ExecuteUbergraph_PrimalItemSkin_BirthdayPants
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_BirthdayPants_C::ExecuteUbergraph_PrimalItemSkin_BirthdayPants(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_BirthdayPants.PrimalItemSkin_BirthdayPants_C.ExecuteUbergraph_PrimalItemSkin_BirthdayPants");

	UPrimalItemSkin_BirthdayPants_C_ExecuteUbergraph_PrimalItemSkin_BirthdayPants_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
