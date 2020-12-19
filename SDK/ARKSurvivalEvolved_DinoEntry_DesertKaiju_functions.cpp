// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_DesertKaiju_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_DesertKaiju.DinoEntry_DesertKaiju_C.ExecuteUbergraph_DinoEntry_DesertKaiju
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_DesertKaiju_C::ExecuteUbergraph_DinoEntry_DesertKaiju(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_DesertKaiju.DinoEntry_DesertKaiju_C.ExecuteUbergraph_DinoEntry_DesertKaiju");

	UDinoEntry_DesertKaiju_C_ExecuteUbergraph_DinoEntry_DesertKaiju_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
