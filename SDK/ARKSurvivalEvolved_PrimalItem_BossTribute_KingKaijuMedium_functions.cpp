// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_BossTribute_KingKaijuMedium_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_BossTribute_KingKaijuMedium.PrimalItem_BossTribute_KingKaijuMedium_C.ExecuteUbergraph_PrimalItem_BossTribute_KingKaijuMedium
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_BossTribute_KingKaijuMedium_C::ExecuteUbergraph_PrimalItem_BossTribute_KingKaijuMedium(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_BossTribute_KingKaijuMedium.PrimalItem_BossTribute_KingKaijuMedium_C.ExecuteUbergraph_PrimalItem_BossTribute_KingKaijuMedium");

	UPrimalItem_BossTribute_KingKaijuMedium_C_ExecuteUbergraph_PrimalItem_BossTribute_KingKaijuMedium_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
