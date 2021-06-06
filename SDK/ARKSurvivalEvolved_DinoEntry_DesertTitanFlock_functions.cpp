// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_DesertTitanFlock_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_DesertTitanFlock.DinoEntry_DesertTitanFlock_C.ExecuteUbergraph_DinoEntry_DesertTitanFlock
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_DesertTitanFlock_C::ExecuteUbergraph_DinoEntry_DesertTitanFlock(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_DesertTitanFlock.DinoEntry_DesertTitanFlock_C.ExecuteUbergraph_DinoEntry_DesertTitanFlock");

	UDinoEntry_DesertTitanFlock_C_ExecuteUbergraph_DinoEntry_DesertTitanFlock_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
