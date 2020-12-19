// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Basilisk_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Basilisk.DinoEntry_Basilisk_C.ExecuteUbergraph_DinoEntry_Basilisk
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Basilisk_C::ExecuteUbergraph_DinoEntry_Basilisk(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Basilisk.DinoEntry_Basilisk_C.ExecuteUbergraph_DinoEntry_Basilisk");

	UDinoEntry_Basilisk_C_ExecuteUbergraph_DinoEntry_Basilisk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
