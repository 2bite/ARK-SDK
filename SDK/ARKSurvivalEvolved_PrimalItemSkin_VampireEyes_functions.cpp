// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_VampireEyes_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_VampireEyes.PrimalItemSkin_VampireEyes_C.ExecuteUbergraph_PrimalItemSkin_VampireEyes
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_VampireEyes_C::ExecuteUbergraph_PrimalItemSkin_VampireEyes(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_VampireEyes.PrimalItemSkin_VampireEyes_C.ExecuteUbergraph_PrimalItemSkin_VampireEyes");

	UPrimalItemSkin_VampireEyes_C_ExecuteUbergraph_PrimalItemSkin_VampireEyes_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
