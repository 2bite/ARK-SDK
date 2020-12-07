// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_BossTribute_KingKaijuHard_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_BossTribute_KingKaijuHard.PrimalItem_BossTribute_KingKaijuHard_C.ExecuteUbergraph_PrimalItem_BossTribute_KingKaijuHard
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_BossTribute_KingKaijuHard_C::ExecuteUbergraph_PrimalItem_BossTribute_KingKaijuHard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_BossTribute_KingKaijuHard.PrimalItem_BossTribute_KingKaijuHard_C.ExecuteUbergraph_PrimalItem_BossTribute_KingKaijuHard");

	UPrimalItem_BossTribute_KingKaijuHard_C_ExecuteUbergraph_PrimalItem_BossTribute_KingKaijuHard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
