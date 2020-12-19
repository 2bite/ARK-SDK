// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_KingKaiju_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_KingKaiju.DinoEntry_KingKaiju_C.ExecuteUbergraph_DinoEntry_KingKaiju
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_KingKaiju_C::ExecuteUbergraph_DinoEntry_KingKaiju(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_KingKaiju.DinoEntry_KingKaiju_C.ExecuteUbergraph_DinoEntry_KingKaiju");

	UDinoEntry_KingKaiju_C_ExecuteUbergraph_DinoEntry_KingKaiju_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
