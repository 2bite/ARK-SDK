#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MapSpawnPoint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass MapSpawnPoint.MapSpawnPoint_C
// 0x0008 (0x0578 - 0x0570)
class UMapSpawnPoint_C : public UUI_SpawnPoint
{
public:
	class UImage*                                      SpawnPointImage;                                          // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MapSpawnPoint.MapSpawnPoint_C");
		return ptr;
	}


	TEnumAsByte<ESlateVisibility> Get_Default__MapSpawnPoint_C_Visiblity_1();
	void ExecuteUbergraph_MapSpawnPoint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
