// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Fenrir_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Fenrir.DinoColorSet_Fenrir_C.ExecuteUbergraph_DinoColorSet_Fenrir
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Fenrir_C::ExecuteUbergraph_DinoColorSet_Fenrir(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Fenrir.DinoColorSet_Fenrir_C.ExecuteUbergraph_DinoColorSet_Fenrir");

	UDinoColorSet_Fenrir_C_ExecuteUbergraph_DinoColorSet_Fenrir_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
